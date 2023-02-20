#pragma once

// Ό³Έν :
class ClassSample
{
public:
	// constrcuter destructer
	ClassSample();
	~ClassSample();

	// delete Function
	ClassSample(const ClassSample& _Other) = delete;
	ClassSample(ClassSample&& _Other) noexcept = delete;
	ClassSample& operator=(const ClassSample& _Other) = delete;
	ClassSample& operator=(ClassSample&& _Other) noexcept = delete;

protected:

private:

};

