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

function reverseString(s) {
    
    var ar,rev;
    
    try{
        ar=s.split("");
        rev=ar.reverse();
        s=rev.join("");
    }
    catch(e){
        console.log("s.split is not a function");
    }
    finally{
        console.log(s);
    }
    
}

function main() {
    const s = eval(readLine());
    
    reverseString(s);
}
