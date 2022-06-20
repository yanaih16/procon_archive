package main

import (
	"fmt"
)

func main() {
	var n int
	var ans = 0
	fmt.Scanf("%d", &n)
	m := make(map[int]bool)
	for i := 0; i < n; i++ {
		var a int
		fmt.Scanf("%d", &a)
		if m[a] != true {
			m[a] = true
			ans++
		}
	}
	fmt.Printf("%d\n", ans)
}
