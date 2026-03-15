mod access;
mod ownership;
mod updating;
fn main() {
    access::access_hashmap();
    ownership::owned();
    updating::updating_values();
}
