INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
VPATH += $$PWD

SUBDIRS += wgContentSma100B wgContentFsv3044 wgContentNrx wgContentOsp230 wgMainWindow
include(wgContentSma100B/wgContentSma100B.pri)
include(wgContentFsv3044/wgContentFsv3044.pri)
include(wgContentNrx/wgContentNrx.pri)
include(wgContentOsp230/wgContentOsp230.pri)
include(wgMainWindow/wgMainWindow.pri)

SOURCES +=    

HEADERS +=    

FORMS +=
