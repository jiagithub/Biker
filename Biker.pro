QT += xml
INCLUDEPATH += /usr/include/
LIBS += -L/usr/lib \
    -lcurl \
    -lzzip

profiling {
    QMAKE_CFLAGS+=-pg
    QMAKE_CXXFLAGS+=-pg
    QMAKE_LFLAGS+=-pg
}

HEADERS += src/Database/osmdatabase.hpp \
    src/DataPrimitives/osmproperty.hpp \
    src/DataPrimitives/DataPrimitives.hpp \
    src/DataPrimitives/gpsposition.hpp \
    src/DataPrimitives/osmnode.hpp \
    src/DataPrimitives/DataPrimitiveDefines.hpp \
    src/DataPrimitives/osmedge.hpp \
    src/DataPrimitives/osmway.hpp \
    src/DataPrimitives/gpsroute.hpp \
    src/DataPrimitives/osmpropertytree.hpp \
    src/Database/srtm/srtm.h \
    src/Database/srtm/zip.h \
    src/Database/Parser/osmparser.hpp \
    src/Database/osmdatabasewriter.hpp \
    src/DataPrimitives/osmrelation.hpp
SOURCES += src/Database/osmdatabase.cpp \
    src/DataPrimitives/osmproperty.cpp \
    src/main.cpp \
    src/DataPrimitives/gpsposition.cpp \
    src/DataPrimitives/osmnode.cpp \
    src/DataPrimitives/osmedge.cpp \
    src/DataPrimitives/osmway.cpp \
    src/DataPrimitives/gpsroute.cpp \
    src/DataPrimitives/osmpropertytree.cpp \
    src/Database/srtm/srtm.cpp \
    src/Database/srtm/zip.cpp \
    src/Database/Parser/osmparser.cpp \
    src/Database/osmdatabasewriter.cpp \
    src/DataPrimitives/osmrelation.cpp
