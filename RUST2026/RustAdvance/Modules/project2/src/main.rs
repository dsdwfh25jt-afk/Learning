use project2::house::*; 
// mod house;   
// pub mod house;
fn main() {
    // crate::house::bedroom::this_is_bedroom();
    bedroom::this_is_bedroom();
    println!("Hello ... let's F  Go !");
}


// A path can take two forms:

// An absolute path is the full path starting from a crate root; for code from an external crate, the absolute path begins with the crate name, and for code from the current crate, it starts with the literal crate.
// A relative path starts from the current module and uses self, super, or an identifier in the current module.