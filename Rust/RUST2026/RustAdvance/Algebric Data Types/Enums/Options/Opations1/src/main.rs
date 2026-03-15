// options

// enum Options<i32>
fn main() {
    let number   = Some(123) ;
    let number: Option<i32>= None;
    match number {
        // some contains some kind of data and None nothing 
        // InShort Some is something & None is nothing 
        Some(data) => println!("The number is : {}",data),
        None => println!("There is no number ... "),    
    }
    println!("Hello, world!");
}
