<?php
// If the file ./test found, execute it, otherwise run g++ test.cpp -o test and then execute it

if ( !file_exists('./test') ) {
    exec('g++ test.cpp -o test');
}


exec('./test');