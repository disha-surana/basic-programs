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
function vowelsAndConsonants(s) {
    
    for(var i=0;i<s.length;i++){
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                console.log(s[i]);
            break;
        }
    }
    for(var i=0;i<s.length;i++){
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                break;
            default:
                console.log(s[i]);
            break;
        }
    }  
}
function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}
