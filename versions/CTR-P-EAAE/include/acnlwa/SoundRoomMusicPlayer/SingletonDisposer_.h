#ifndef ACNLWA_SOUNDROOMMUSICPLAYER_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDROOMMUSICPLAYER_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundRoomMusicPlayer {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundRoomMusicPlayer

#endif  // ACNLWA_SOUNDROOMMUSICPLAYER_SINGLETONDISPOSER__H
