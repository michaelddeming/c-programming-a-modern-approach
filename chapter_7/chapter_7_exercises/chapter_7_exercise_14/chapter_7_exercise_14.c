
// frac_part = f - (int) f;

// if the difference is so small the float precision may round to 0. We would need greater precision to compute any difference that exceeds the precision limits of the float. We would need type double.