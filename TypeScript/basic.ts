function greet(  name : string) : string { // created fucntion which is taking string in and returns string 
    return `hello ${name}` // returning the string with appeding the input
}
console.log(greet("sol devs")); // calling the function we've created with input string 
// console.log(greet(32)); // well this is not allowed but it will run at the end 
// good to avoid unwated type conversions 