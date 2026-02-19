// pattern matching 
fn main() {
    // println!("Hello, world!");
    // creat new var and assign val 
    let rectangle = Shapes::Rectangle(7.02344,8.0234); 
    let circle =  Shapes::Circle(7.032);
    let square = Shapes::Square(7.0122);
    // print area by call calculate_area fn 
    println!("Rectangle : {}",calculate_area(rectangle));
    println!("Circle : {}",calculate_area(circle));
    println!("Square : {}",calculate_area(square));
}

// creat enum 
enum Shapes {
    Rectangle(f64,f64),
    Square(f64),
    Circle(f64),
}

// create fn for calc area 
fn calculate_area(shape : Shapes) -> f64 { // return val of area 
    match shape { // match kind of shape & return implicitly 
        Shapes::Rectangle(height,length) => height*length,
        Shapes::Square(side) => side*side,
        Shapes::Circle(r) => 3.14*r*r,
    }
}