use std::collections::HashMap;
pub fn owned() {
    
    let mut collection = HashMap::new();

    // Generted key and val 
    let key_val = String::from("Naruto");
    let val = String::from("Sharingan");

    // we have passed ownership here 
    collection.insert(key_val,val);

    println!("{collection:#?}");   

    // we cant use key_val and val 
    // println!("{keyVal}");   
    // println!("{val}");   
}