// if let 


fn main() {
    let some_data = Some(12);
    // It knows the box is an Option
    // But it doesn't know what kind of thing would have been in the box if it weren't empty
    // so it's necessary to give it data type like i32 which we have given 

    // let some_data : Option<i32> = None; 
    // this if will check the some_data is type of some or not first 
    // if yes then go in 
    // then it will move the value of some_data in val, if it is int float (copyeble) 
    // then it will simple copy data from some_data and create new val and move in it 
    // other wise it will move ownership and to avoid we can pass reference 
    if let Some(val) = some_data { // this if block is basically Some 
        println!("This is something that we know . {val} is in Some(value) ");
    }else {  // this else block is basically None 
        println!("This is something that we dont know");  
    }
    // println!("Hello, world!");
}
