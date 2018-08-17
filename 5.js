'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}
function main() {
    // Write your code here. Read input using 'readLine()' and print output using 'console.log()'.
    const PI= Math.PI;
    
    var n = readLine();
    
    var r =parseFloat(n);
    
    // Print the area of the circle:
    var area= PI*r*r;
    // Print the perimeter of the circle:
    var per= 2*PI*r;
    
    console.log(area);
    console.log(per);
    try {    
        // Attempt to redefine the value of constant variable PI
        PI = 0;
        // Attempt to print the value of PI
        console.log(PI);
    } catch(error) {
        console.error("You correctly declared 'PI' as a constant.");
    }
}
