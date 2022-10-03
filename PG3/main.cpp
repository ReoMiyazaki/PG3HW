#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b)
{
	if (a <= b)
	{
		return static_cast<Type>(a);
	}
	return static_cast<Type>(b);
}

template<>
char Min<char>(char a, char b)
{
	return printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
}

int main(void) {
	printf("%d\n", Min<int>(123, 456));
	printf("%f\n", Min<float>(12.3f, 1.23f));
	printf("%lf\n", Min<double>(123.123, 123.456));
	printf("%c\n", Min<char>('7', '6'));
}