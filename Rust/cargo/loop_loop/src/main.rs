// fn main() {
//     loop {
//         println!("Hello world!"); // this will print this infinite times until we stop it 
//     }
// }

fn main() {
    let mut count = 0;
    loop {
        
        
        println!("{}",count);
        if count == 10 {
            break;
        }

      count+=1;
    }
      count = count * 2;
        println!("This is the value of of count now {}",count*2);
}