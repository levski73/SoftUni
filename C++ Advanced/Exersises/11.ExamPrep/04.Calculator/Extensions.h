#pragma once
#ifndef EXTENTIONS_H
#define EXTENTIONS_H

#include <stack>
#include <string>
#include "Operation.h"

std::stack<int> memory;  // Stack fo memorization

#include "DivisionOperations.h"
#include "MemorySaveOperations.h"
#include "MemoryRecallOperations.h"



class Interpreter:public InputInterpreter {

public:

	Interpreter(CalculationEngine& engine);

	virtual std::shared_ptr<Operation> getOperation(std::string operation)override;

	virtual ~Interpreter() = default;
};

// End class Interpreter definition

Interpreter::Interpreter(CalculationEngine& engine):
	InputInterpreter(engine) {
}

std::shared_ptr<Operation> Interpreter::getOperation(std::string operation) {
	auto ret = InputInterpreter::getOperation(operation);
	if ( ret == nullptr ) {

		if ( operation == "/" )
			return std::make_shared<DivisionOp>();
		else if ( operation == "ms" )
			return std::make_shared<MemorySaveOp>();
		else if ( operation == "mr" )
			return std::make_shared<MemoryRecallOp>();
		else
			return std::shared_ptr<Operation>(nullptr);

	}
	return ret;
}


std::shared_ptr<InputInterpreter>  buildInterpreter(CalculationEngine& engine) {

	return std::shared_ptr<InputInterpreter>(new Interpreter(engine));
}



#endif // !EXTENTIONS_H

