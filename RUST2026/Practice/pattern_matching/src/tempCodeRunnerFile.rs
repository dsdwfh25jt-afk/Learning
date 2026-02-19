
fn main() {
    // println!("Hello, world!");
    let rectangle = Shapes::Rectangle(7,8);
    let circle =  Shapes::Circle(7);
    let square = Shapes::Square(7);
    println!("Rectangle : {}",calculate_area(reactangle));
    println!("Circle : {}",calculate_area(circle));
    println!("Square : {}",calculate_area(square));
}

enum Shapes {
    Rectangle(f64,f64),
    Square(f64),
    Circle(f64),
}