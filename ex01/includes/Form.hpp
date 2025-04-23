#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form {
	private:
	
	std::string name;
	bool is_Signed;
	const int grade_to_sign;
	const int grade_to_exec;

	public:
		Form(std::string name, int grade_to_sign, int grade_to_exec);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		const int get_grade_to_sign() const;
		const int get_grade_to_exec() const;
};
std::ostream& operator<<(std::ostream& out, const Form& Form);


#endif