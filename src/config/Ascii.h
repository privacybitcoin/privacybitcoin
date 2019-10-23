// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019  The PrivacyBitcoin Developers 
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n    \n"
" _____      _                       ____  _ _            _       \n"
"|  __ \\    (_)                     |  _ \\(_) |          (_)      \n"
"| |__) | __ ___   ____ _  ___ _   _| |_) |_| |_ ___ ___  _ _ __  \n"
"| |___/ '__| \\ \\ / / _` |/ __| | | |  _ <| | __/ __/ _ \\| | '_ \\ \n"
"| |   | |  | |\\ V / (_| | (__| |_| | |_) | | || (_| (_) | | | | |\n"
"|_|   |_|  |_| \\_/ \\__,_|\\___|\\__, |____/|_|\\__\\___\\___/|_|_| |_|\n"
"                               __/ |                             \n" 
"                              |___/                              \n";
    


const std::string nonWindowsAsciiArt = 

"\n   \n"
"██████╗ ██████╗ ██╗██╗   ██╗ █████╗  ██████╗██╗   ██╗██████╗ ██╗████████╗ ██████╗ ██████╗ ██╗███╗   ██╗\n"
"██╔══██╗██╔══██╗██║██║   ██║██╔══██╗██╔════╝╚██╗ ██╔╝██╔══██╗██║╚══██╔══╝██╔════╝██╔═══██╗██║████╗  ██║\n"
"██████╔╝██████╔╝██║██║   ██║███████║██║      ╚████╔╝ ██████╔╝██║   ██║   ██║     ██║   ██║██║██╔██╗ ██║\n"
"██╔═══╝ ██╔══██╗██║╚██╗ ██╔╝██╔══██║██║       ╚██╔╝  ██╔══██╗██║   ██║   ██║     ██║   ██║██║██║╚██╗██║\n"
"██║     ██║  ██║██║ ╚████╔╝ ██║  ██║╚██████╗   ██║   ██████╔╝██║   ██║   ╚██████╗╚██████╔╝██║██║ ╚████║\n"
"╚═╝     ╚═╝  ╚═╝╚═╝  ╚═══╝  ╚═╝  ╚═╝ ╚═════╝   ╚═╝   ╚═════╝ ╚═╝   ╚═╝    ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n"
"\n";


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
