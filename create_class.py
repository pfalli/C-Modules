import os

def create_class_files(class_name):
	#push ctrl alt H
	
    # Create header file content
    header_content = f"""#ifndef {class_name.upper()}_HPP
#define {class_name.upper()}_HPP

class {class_name} {{
public:
    {class_name}();
    ~{class_name}();

private:
    // Add your private members here
}};

#endif // {class_name.upper()}_HPP
"""

    # Create source file content
    source_content = f"""#include "{class_name}.hpp"

{class_name}::{class_name}() {{
    // Constructor implementation
}}

{class_name}::~{class_name}() {{
    // Destructor implementation
}}
"""

    # Write header file
    with open(f"{class_name}.hpp", "w") as header_file:
        header_file.write(header_content)

    # Write source file
    with open(f"{class_name}.cpp", "w") as source_file:
        source_file.write(source_content)

    print(f"Class {class_name} created with {class_name}.hpp and {class_name}.cpp")

if __name__ == "__main__":
    class_name = input("Enter the class name: ")
    create_class_files(class_name)