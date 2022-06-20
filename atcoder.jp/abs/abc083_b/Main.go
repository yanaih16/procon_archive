package main

import (
	"fmt"
)

func main() {
	var n, a, b int
	var ans = 0
	fmt.Scanf("%d %d %d", &n, &a, &b)
	for i := 1; i <= n; i++ {
		var c = i
		var sum = 0
		for c != 0 {
			sum += c % 10
			c /= 10
		}
		if a <= sum && sum <= b {
			ans += i
		}
	}
	fmt.Printf("%d\n", ans)
}
