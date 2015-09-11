include(../../common.pri)
TEMPLATE = app
QT += network testlib
QT -= gui
CONFIG += testcase
SOURCES += ../src/test.cpp
INCLUDEPATH = $$TOPDIR/src

# Disable automatic ASCII conversions (best practice, especially for i18n support).
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

# Add the embedded resources.
RESOURCES = ../../../qrc/aws.qrc

# Neaten the output directories.
CONFIG(debug,debug|release):   DESTDIR = $$absolute_path($$OUT_PWD/../../../debug)
CONFIG(release,debug|release): DESTDIR = $$absolute_path($$OUT_PWD/../../../release)
LIBS += -L$$DESTDIR
TEMPDIR = $$DESTDIR/$$TARGET-tmp
MOC_DIR = $$DESTDIR/$$TARGET-tmp
OBJECTS_DIR = $$DESTDIR/$$TARGET-tmp
QMAKE_RPATHDIR += $$DESTDIR
RCC_DIR = $$DESTDIR/$$TARGET-tmp

# Code coverage reporting (for Linux at least).
unix {
    # Enable gcov compile and link flags.
    QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
    QMAKE_LFLAGS += -fprofile-arcs -ftest-coverage
    QMAKE_CXXFLAGS_RELEASE -= -O1 -O2 -O3

    # Generate gcov's gcda files by executing the test program.
    gcov.depends = $$DESTDIR/$$TARGET
    gcov.target = $$TEMPDIR/test.gcda
    gcov.commands = $$DESTDIR/$$TARGET

    # Generate an lcov tracefile from gcov's gcda files.
    lcov.depends = $$TEMPDIR/test.gcda
    lcov.target = $$TEMPDIR/coverage.info
    lcov.commands = lcov --capture --directory $$shell_quote($$TEMPDIR) \
                         --output $$shell_quote($$TEMPDIR/coverage.info) \
                         --quiet; \
                    sed -i -Ee $$shell_quote(s|^(SF:)/home/src/libqtaws(/src/)|\\1$$TOPDIR\\2|) \
                         $$shell_quote($$TEMPDIR/coverage.info); \
                    lcov --remove $$shell_quote($$TEMPDIR/coverage.info) \
                         $$shell_quote(/opt/*/include/*/*) \
                         $$shell_quote(/usr/include/*/*) \
                         $$shell_quote(src/core/qmessageauthenticationcode.cpp) \
                         $$shell_quote(*/test/*) $$shell_quote(*/*-tmp/*) \
                         --output $$shell_quote($$TEMPDIR/coverage.info) --quiet

    # Generate HTML coverage reports from lcov's tracefile.
    coverage.depends = $$TEMPDIR/coverage.info
    coverage.commands = genhtml --output-directory $$shell_quote($$DESTDIR/$$TARGET-coverage) \
                                --prefix $$TOPDIR/src --quiet \
                                --title $$shell_quote(libqtaws $$VERSION) \
                                $$shell_quote($$TEMPDIR/coverage.info)

    # Include the above custom targets in the generated build scripts (eg Makefile).
    QMAKE_EXTRA_TARGETS += coverage gcov lcov

    # Clean up files generated by the above custom targets.
    QMAKE_CLEAN += $$TEMPDIR/*.gcda $$TEMPDIR/*.gcno $$TEMPDIR/coverage.info
    QMAKE_DISTCLEAN += -r $$DESTDIR/$$TARGET-coverage
}

include(src/src.pri)
