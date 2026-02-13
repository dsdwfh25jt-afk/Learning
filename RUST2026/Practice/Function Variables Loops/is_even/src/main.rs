// Function for is given number is even or not 

fn main () {
    println!("Is 20 is Even : {}",is_even(20));
}

// the function for checking number is even or not 
fn is_even(num : i32) -> bool { // taking num as parameter, returning bool
    // checking number is even
    if num % 2 == 0 { // we dont need paranthesis for if condi
        println!("The number is EVEN");
        return true; 
    } // ends scope of if statement
    println!("The number is ODD");
    return false; 
} // ends scope of is_even func  