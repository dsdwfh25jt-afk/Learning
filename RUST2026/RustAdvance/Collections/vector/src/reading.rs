// two ways to access vec elements 
// vecName.get(index)
// vecName[index]

pub fn readingElements() {

    
    let vector = vec![1,2,3,4,5]; 
    // we can use both ways at both places but vec[idx] and vec.get(idx) 
    // we want to understand the secure approch so /../

    // this is easy way to do 
    // if we pass any index which does not exist this will panic 
    // and crash the program 
    println!("This is the 2 nd element, {}",vector[1]);
    
    // this is the hard way and secure
    // if we pass anu index which does not exist this will simple
    // return None 
    let element : Option<&i32> = vector.get(2); 
    match element {
        Some(element) => println!("Element found and it's {element}"),
        None => println!("Element Not found ..."),
    }
}