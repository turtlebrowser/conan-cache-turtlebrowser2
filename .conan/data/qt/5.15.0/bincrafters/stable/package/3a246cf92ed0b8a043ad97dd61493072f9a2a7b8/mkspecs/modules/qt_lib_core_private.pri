QT.core_private.VERSION = 5.15.0
QT.core_private.name = QtCore
QT.core_private.module =
QT.core_private.libs = $$QT_MODULE_LIB_BASE
QT.core_private.includes = $$QT_MODULE_INCLUDE_BASE/QtCore/5.15.0 $$QT_MODULE_INCLUDE_BASE/QtCore/5.15.0/QtCore
QT.core_private.frameworks =
QT.core_private.depends = core
QT.core_private.uses =
QT.core_private.module_config = v2 internal_module
QT.core_private.enabled_features = clock-gettime datetimeparser doubleconversion futimens getauxval getentropy glib glibc hijricalendar icu inotify linkat mimetype-database poll_ppoll system-pcre2 sha3-fast system-doubleconversion
QT.core_private.disabled_features = etw futimes posix-libiconv gnu-libiconv iconv journald lttng poll_poll poll_pollts poll_select renameat2 slog2 statx syslog
QMAKE_DEFINES_GLIB = PCRE_STATIC=1
QMAKE_INCDIR_GLIB = /home/runner/work/turtlebrowser/turtlebrowser/release/.conan/data/pcre/8.41/_/_/package/dc325ee17a0eb65afe28199db07a0e631d482f50/include /usr/include/glib-2.0 /usr/lib/x86_64-linux-gnu/glib-2.0/include
QMAKE_DEPENDS_ICU_CC = LIBDL
QMAKE_DEPENDS_ICU_LD = LIBDL
QMAKE_LIBS_LIBRT = 
QMAKE_LIBS_GLIB = -lgthread-2.0 -lglib-2.0
QMAKE_LIBS_ICU = -licui18n -licuio -licutest -licutu -licuuc -licudata -ldl
QMAKE_LIBS_PCRE2 = -lpcre2-16
QMAKE_LIBS_LIBATOMIC = 
QMAKE_LIBS_DOUBLECONVERSION = -ldouble-conversion
