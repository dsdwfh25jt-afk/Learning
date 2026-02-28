#[derive(Debug)]
// can be used one at a time 
enum Token{
        Sol(f64), // storing value 
        Btc(f64),
        Dcx(f64),
}

fn main() {
    let coin = Token::Sol(2.3453); // storing the val in coin which is type of Sol 
    println!("Hello, world!  {:?} ",coin); 


    // matching the kind of token and printing the value 
    match coin {
        Token::Sol(amount) => println!("{:?} ",amount),
        Token::Btc(amount) => println!("{:?} ",amount),
        Token::Dcx(amount) => println!("{:?} ",amount),
    }
}
