const fs = require("fs");

i = 1;

for(i; i < 37; i++) {
    if (i < 10) {
        fs.writeFileSync(`E:\\C++\\Introducation to C++ Programming\\Programming Exercises_Cpp\\chapter_03\\EX_3.0${i}.cpp`, '', 'utf-8');
    }else {
        fs.writeFileSync(`E:\\C++\\Introducation to C++ Programming\\Programming Exercises_Cpp\\chapter_03\\EX_3.${i}.cpp`, '', 'utf-8');
    }
}