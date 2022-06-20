package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	fmt.Scanf("%d", &n)
	var a []int
	for i := 0; i < n; i++ {
		var b int
		fmt.Scanf("%d", &b)
		a = append(a, b)
	}
	sort.Sort(sort.Reverse(sort.IntSlice(a)))
	var c = 0
	var d = 0
	for i := 0; i < n; i++ {
		if i%2 == 0 {
			c += a[i]
		} else {
			d += a[i]
		}
	}
	fmt.Printf("%d\n", c-d)
}
