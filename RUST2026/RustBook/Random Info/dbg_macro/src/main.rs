#[derive(Debug)]

struct Rectangle {
    height: u32,
    width: u32,
}

fn main() {
    println!("Hello, world!");

    let scale = 2 ;
    let rec1 = Rectangle {
        width: dbg!(30 * scale), // dbg macro dont take ownership of expression so we dont need to pass reference of scale here
        height: 40,
    };

    dbg!(&rec1); // and here it will take ownership if we explecitly dont pass the reference 
    // println!(" this is dbg macro {:#?}",dbg!(&rec1));
}
