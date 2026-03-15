// methods in structures , enums and traits 
#[derive(Debug)]
struct Example {
    number1 : i32,
    number2 : i32,
    name_xyz : String,
}

impl  Example {
    fn example_method (&mut self) {
        // this is example method 
        println!("This is number 1 from Examples : {}",self.number1);
        println!("This is number 2 from Examples : {}",self.number2);
        self.name_xyz = String::from("Example Struct");
        println!("This is string from : {}",self.name_xyz);
    }
}

fn main() {
    let mut showcase = Example {
        number1 : 7121,
        number2 : 712125,
        name_xyz : "This is random name".to_string(),
    };
    // showcase.example_method();

    println!("This is number 1 from main fn {}",showcase.number1);
    println!("This is number 2 from main fn {}",showcase.number2);
    println!("This is string from main fn {}",showcase.name_xyz);


        println!("This is struct info :{:#?}",showcase);
        // self
}