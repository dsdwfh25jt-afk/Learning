fn main() {
    // tuples 
    
    // this is how tuple is created 
    let tup :(i64 , f64 , u32 ) = (500 , 7.1 , 1);

    let (a,b,c) = tup ;   // this is called distructuring coz its breaking single tuple into three parts 


    println!("The value of a is {a}");
    println!("The value of b is {b}");
    println!("The value of c is {c}");

    // this is how we can access tuple element by using dor operator which also kwon as period 
    println!("The value of tup.1 should be 7.1 and is :  {}",tup.1);


}