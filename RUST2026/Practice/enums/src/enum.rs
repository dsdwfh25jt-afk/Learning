fn main() {
    let reactangle = Shape::Rectangle(12.567,33.9876);
    // calculate_area(reactangle);
    let circle = Shape::Circle(23.6564);
    // calculate_area(circle);
    println!("{}",calculate_area(circle));
    println!("{}",calculate_area(reactangle));
}

enum Shape {
    Rectangle(f64 ,f64),
    Circle(f64),
}

fn calculate_area(shape: Shape) -> f64 {
    match shape {
        Shape::Rectangle(a,b) => a*b,
        Shape::Circle(r) => 3.14*r*r,
    }
}