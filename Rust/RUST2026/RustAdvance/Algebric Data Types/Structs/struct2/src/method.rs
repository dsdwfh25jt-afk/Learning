struct Rectangle {
    length : i32 ,
    breadth : i32 ,
}

// Implimentation Block 
impl Rectangle {
        // Associated Functions  
        // In Associated Functions we Use Big 'S' for Self
        fn new(length : i32 , breadth : i32)  -> Self {
            Self {
                length,
                breadth,
            }
        }

        // Methods
        // in methods we use small 's' for self 
        fn area(&self) -> i32{
            self.length * self.breadth
        }
}

fn main() {
    // Creating Instances with using associated functions 
    let rec1 = Rectangle::new(10 , 5);
    let rec2 = Rectangle::new(11 , 13);

    // Accessing and using Instances using Methods 
    println!("Rec1 area = {}",rec1.area());
    println!("Rec2 area = {}",rec2.area());
}