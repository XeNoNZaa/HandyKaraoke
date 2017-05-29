#ifndef SONG_H
#define SONG_H

#include <QObject>

class Song : public QObject
{
    Q_OBJECT
public:
    explicit Song(QObject *parent = 0);
    Song(const Song &s);
    Song& operator = (const Song &s);

    QString id()        { return sId; }
    QString name()      { return sName; }
    QString artist()    { return sArtist; }
    QString key()       { return sKey; }
    int     tempo()     { return sTempo; }
    QString songType()  { return sSongType; }
    QString lyrics()    { return sLyrics; }
    QString path()      { return sPath; }

    void setId          (QString id)        { sId = id; }
    void setName        (QString name)      { sName = name; }
    void setArtist      (QString artist)    { sArtist = artist; }
    void setKey         (QString key)       { sKey = key; }
    void setTempo       (int tempo)         { sTempo = tempo; }
    void setSongType    (QString type)      { sSongType = type; }
    void setLyrics      (QString lyr)       { sLyrics = lyr; }
    void setPath        (QString path)      { sPath = path; }

signals:

public slots:

private:
    QString sId;
    QString sName;
    QString sArtist;
    QString sKey;
    int     sTempo;
    QString sSongType;
    QString sLyrics;
    QString sPath;
};

#endif // SONG_H
