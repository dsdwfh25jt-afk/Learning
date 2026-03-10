use std::collections::HashMap;
fn main() {

    // HashMap::new(key,value)
    let mut score = HashMap::new();

    score.insert(String::from("yello"),10);
    score.insert(String::from("blue"),11);
    score.insert(String::from("pink"),01);  


    // this will get the value value of the key 
    let pink = score.get(&"pink".to_string()).copied().unwrap_or(0);
    // &"pink".to_string() is the key of the HashMap 
    // this get function returns ooption<&T>     
    // by calling .copied() it is returning the option<T> here 
    println!("{pink:#?}");
    println!("{score:#?}");
}
