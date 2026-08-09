#!/usr/bin/node
/*
* Print a square of size $size with character #
*/
const size = parseInt(process.argv[2], 10);

if (!isNaN(size) && size > 0) {
    for (let i = 0; i < size; i++) {
        console.log('#'.repeat(size));
    }
}
