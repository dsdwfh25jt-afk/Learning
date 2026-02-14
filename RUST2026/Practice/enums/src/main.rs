// basic structure of enums 

fn main() {
    // println!("Hello, world!");
    let my_opt = Options::One ;
    let goal = my_opt; // no err  , coz Options is copy  
    take_an_enum(goal);

}

enum Options {
    One ,
    Two ,
    Three , 
    Four ,
}

fn take_an_enum (opt_1 : Options) {
    // perform operations for pertucular options 
}