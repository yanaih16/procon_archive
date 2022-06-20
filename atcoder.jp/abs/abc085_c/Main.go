package main

import (
	"fmt"
)

func main() {
	var n, y int
	fmt.Scanf("%d %d", &n, &y)
	var ans = false
	for i := 0; i <= n; i++ {
		for j := 0; j <= n-i; j++ {
			if i*10000+j*5000+(n-i-j)*1000 == y {
				fmt.Printf("%d %d %d\n", i, j, n-i-j)
				ans = true
			}
		}
		if ans {
			break
		}
	}
	if !ans {
		fmt.Printf("%d %d %d\n", -1, -1, -1)
	}
}
