function greet(  name : string) : string { // created fucntion which is taking string in and returns string 
    return `hello ${name}` // returning the string with appeding the input
}
console.log(greet("sol devs")); // calling the function we've created with input string 
// console.log(greet(32)); // well this is not allowed but it will run at the end 
// good to avoid unwated type conversions 

// basic data types in ts 
let nameOfDev: string = "some name";
let balance : number = 100;
let isActive : boolean = true;

// interface is just like structuress of rust (class)
interface walletAcount { // blueprint of the data
    lamports : number ;
    isExecutable : boolean ;
    rentEpoch : number ;
    owner : string;
}

const acount1 : walletAcount = { // creation of the data (object)
    lamports : 13453,
    isExecutable : false,
    rentEpoch : 93857,
    owner : "user-432",
}

// enums - choose one from multiple 
type transactionSatus = "success" | "processing" | "failed";
let currentStatus : transactionSatus = "processing";