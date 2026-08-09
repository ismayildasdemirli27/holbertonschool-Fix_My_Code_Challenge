#!/usr/bin/ruby
# Sort integer arguments numerically

result = []
ARGV.each do |arg|
  # Check if the argument is a valid integer (including negative numbers)
  if arg =~ /^-?[0-9]+$/
    result << arg.to_i
  end
end

# Sort numerically and print each on a new line
result.sort.each do |n|
  puts n
end
