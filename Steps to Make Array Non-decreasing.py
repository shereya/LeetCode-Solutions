#77/87 Cases Passed
#Time Limit Exceeded is the error
class Solution:
    def decreasingorder(self, x):
        c = 0
        for i in range(1, len(x)):
            if x[i - 1] > x[i]:
                c += 1
        if c != 0:
            return 0
        else:
            return 1

    def totalSteps(self, nums):
        stepcount = 0
        while not self.decreasingorder(nums):
            nums_new = []
            nums_index = []
            for i in range(1, len(nums)):
                if nums[i - 1] > nums[i]:
                    nums_index.append(i)
            for i in range(len(nums)):
                for j in nums_index:
                    if i == j:
                        nums[i] = 0
            for i in nums:
                if i != 0:
                    nums_new.append(i)
            nums = nums_new
            stepcount += 1
        return stepcount
