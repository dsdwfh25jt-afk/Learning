// how to handle other values than options using match function 
// which we are going to use again 

fn takingInput (some_number : u32) {
    match some_number{ 
        0 => println!("This is Zero"),
        1 => println!("This is One"),
        2 => println!("This is Two"),
        other => println!("This is not Zero , One or two , \n this is something bigger than that... This is : {other}"),
        // other used when we want to use other or unknown value afer matching 
    }
} 
fn main() {
    // println!("Hello, world!");

    let some_number = 12;
    takingInput(some_number);
}
