#include <Audio/Sound.hpp>

#include <cstdio>
#include <iostream>

int main()
{
    Audio::Sound coin{ "coin.wav" };
    coin.setLooping(true);

    coin.play();

    std::cout << "Press enter to continue..." << std::endl;
    std::ignore = getchar();

    coin.stop();

    return 0;
}