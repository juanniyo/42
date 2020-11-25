find . -type f -name "*.c" | xargs -I {} grep " *ft_" {} | grep  ")" | grep -v ";" | grep -v "static" | sed 's/$/;/g'
