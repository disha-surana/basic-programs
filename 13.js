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

function getSecondLargest(nums) {
    // Complete the function
    let sl,l;
    let n=nums.length;
    
    sl=l=nums[0];
    
    for(var i=0;i<n;i++){
        if(l<nums[i])
            l=nums[i];
    }
    
    for(var i=0;i<n;i++){
        
        if(sl<nums[i] && nums[i]<l){
            sl=nums[i];
        }
    }
    
        return sl;
}

function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);
    
    console.log(getSecondLargest(nums));
}
