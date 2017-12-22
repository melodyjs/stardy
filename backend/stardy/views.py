from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from .models import User, Interest, Group, UsersGroup, Attendence, GroupInterest, Material, GroupPlc
from .serializers import UserSerializer, InterestSerializer, GroupSerializer, UsersGroupSerializer, \
    AttendenceSerializer, GroupInterestSerializer, MaterialSerializer, GroupPlcSerializer


class UserViewSet(ModelViewSet):
    queryset = User.objects.all()
    serializer_class = UserSerializer
    authentication_classes = []
    permission_classes = [IsAuthenticated]


class InterestViewSet(ModelViewSet):
    queryset = Interest.objects.all()
    serializer_class = InterestSerializer


class GroupViewSet(ModelViewSet):
    queryset = Group.objects.all()
    serializer_class = GroupSerializer


class UsersGroupViewSet(ModelViewSet):
    queryset = UsersGroup.objects.all()
    serializer_class = UsersGroupSerializer


class AttendenceViewSet(ModelViewSet):
    queryset = Attendence.objects.all()
    serializer_class = AttendenceSerializer


class GroupInterestViewSet(ModelViewSet):
    queryset = GroupInterest.objects.all()
    serializer_class = GroupInterestSerializer


class MaterialViewSet(ModelViewSet):
    queryset = Material.objects.all()
    serializer_class = MaterialSerializer


class GroupPlcViewSet(ModelViewSet):
    queryset = GroupPlc.objects.all()
    serializer_class = GroupPlcSerializer
