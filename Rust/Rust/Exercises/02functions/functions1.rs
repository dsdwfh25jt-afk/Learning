// TODO: Add some function with the name `call_me` without arguments or a return value.

fn main() {
    call_me(); // Don't change this line
    println!("{}",call_me());
}

fn call_me()-> String {
    println!("This is the call me function >>> ");
    return "this is call me function".to_string();
}