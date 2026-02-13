fn main() {
    // printing 
    println!("This macro is used to print string with new line at the end");
    print!("This macro is used to print strng without new line ...");
    println!("This is 3rd line in the code but it will continue from line 2 in output");
    // println! and prin! both are macros and used to print string and text 

    // data types 
    
    let mut num = 234 ; // after declaring it must be used 
    // after using mut it must be changed in future 

    println!("This is the value of the number : {}", num);

    num = 123 ;
    // after over writing the variable value it must be used 

    println!("This is the value of the number after updating : {}",num);
        // if we dont follow the rules then we have high chances to get error and warnings 




    // constants 

    const NUM : i32 = 1234 ; // i for singed integers 

    let some_num : u32 = 12 ;  //  u for usinged 

    print!("This is const :  {}\n", NUM);
    print!("This is some_num : {}", some_num);
    

    // type conversion 

    // for better experiance use _ before naming the variable 

    let _i: i32 = 12 ;
    let _u: u32 = _i as u32 ;

    let _x: u32 = _u + ( _i as u32 );

    // min and max value 

    let _min : i32 = i32::MIN ;
    let _max : i32 = i32::MAX ; 

    
}
