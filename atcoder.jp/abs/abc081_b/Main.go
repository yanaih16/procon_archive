package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scanf("%d", &n)
	var a [200]int
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &a[i])
	}
	var ans = 0
	var f = 1
	for f == 1 {
		for i := 0; i < n; i++ {
			if a[i]%2 == 0 {
				a[i] /= 2
			} else {
				f = 0
			}
		}
		if f == 1 {
			ans++
		} else {
			break
		}
	}
	fmt.Printf("%d\n", ans)
}
